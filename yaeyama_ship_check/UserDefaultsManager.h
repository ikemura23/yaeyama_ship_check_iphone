//
//  UserDefaultsManager.h
//  yaeyama_ship_check
//
//  Created by banbaraniisan on 2014/08/30.
//  Copyright (c) 2014年 ikemura. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserDefaultsManager : NSObject

+(Boolean)save:(id) value key:(NSString*)key;
+(id)load:(NSString*)key;
+(Boolean)exist:(NSString*)key;
+ (Boolean)saveMutableDictonary:(NSMutableDictionary*) value key:(NSString*)key;
+ (NSMutableDictionary*)loadMutableDictonary:(NSString*)key;
@end
