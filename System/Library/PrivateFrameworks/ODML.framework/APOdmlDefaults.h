/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ODML/ODML-Structs.h>
#import <ODML/APOdmlSingleton.h>

@class NSMutableDictionary;

@interface APOdmlDefaults : APOdmlSingleton {

	NSMutableDictionary* _factoryDefaults;
	CFStringRef _defaultsBundleID;

}

@property (nonatomic,retain) NSMutableDictionary * factoryDefaults;              //@synthesize factoryDefaults=_factoryDefaults - In the implementation block
@property (assign,nonatomic) CFStringRef defaultsBundleID;                       //@synthesize defaultsBundleID=_defaultsBundleID - In the implementation block
+(id)sharedInstance;
+(BOOL)boolForKey:(id)arg1 ;
+(long long)integerForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(id)arrayForKey:(id)arg1 ;
+(double)doubleForKey:(id)arg1 ;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
+(void)setArray:(id)arg1 forKey:(id)arg2 ;
+(id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2 ;
+(void)_setDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(CFStringRef)defaultsBundleID;
-(NSMutableDictionary *)factoryDefaults;
-(void)setFactoryDefaults:(NSMutableDictionary *)arg1 ;
-(void)setDefaultsBundleID:(CFStringRef)arg1 ;
@end
