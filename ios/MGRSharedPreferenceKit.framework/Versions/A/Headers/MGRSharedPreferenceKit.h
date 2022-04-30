//
//  MGRSharedPreferenceKit.h
//  MGRSharedPreferenceKit
//
//  Created by Hyunjun Kwak on 2016. 6. 2..
//  Copyright © 2016년 Hyunjun Kwak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MGRSharedPreferenceKit : NSObject
+ (void)setCryptKey:(NSString*)cryptKey;
+ (void)setAppGroupsId:(NSString*)appGroupsId;

+ (NSMutableDictionary*)getAllSharedPreference;

// SharedPreference (Encrypt)
+ (BOOL)setSharePreference:(id)data forKey:(NSString*)key;
+ (id)getSharePreference:(NSString*)key defaultValue:(NSString*)defaultValue;

// SharedPreference (Not Encrypt)
+ (BOOL)setSharePreferenceNoEncrypt:(id)data forKey:(NSString*)key;
+ (id)getSharePreferenceNoEncrypt:(NSString*)key defaultValue:(NSString*)defaultValue;

+ (BOOL)removeSharePreference:(NSString*)key;
@end
