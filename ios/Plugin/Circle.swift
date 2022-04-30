import Foundation

@objc public class Circle: NSObject {
    @objc public func echo(_ value: String) -> String {
        
        print(value)
        return value
    }
}
