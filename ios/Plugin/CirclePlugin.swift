import Foundation
import Capacitor

/**
 * Please read the Capacitor iOS Plugin Development Guide
 * here: https://capacitorjs.com/docs/plugins/ios
 */
@objc(CirclePlugin)
public class CirclePlugin: CAPPlugin {
    private let implementation = Circle()
    
    @objc func echo(_ call: CAPPluginCall) {
        let key = call.getString("value") ?? ""
        let value = UserDefaults.shared.value(forKey: key) ?? ""
        call.resolve([
            "value": implementation.echo(value as! String)
        ])
    }
}

extension UserDefaults {
    static var shared: UserDefaults {
        let combined = UserDefaults.standard
        let appGroupId = "group.hanwha.mgr.app"
        combined.addSuite(named: appGroupId)
        return combined
    }
}

