/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSEphemeralDefaults : NSObject
+(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
+(void)setHARLoggingEnabled:(BOOL)arg1 ;
+(void)setHARLoggingItemLimit:(long long)arg1 ;
+(BOOL)bagKeyRegistrationEnabled;
+(id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3 ;
+(void)_accessDataStoreUsingBlock:(/*^block*/id)arg1 ;
+(BOOL)HARLoggingEnabled;
+(long long)HARLoggingItemLimit;
+(BOOL)processAssertionsEnabled;
+(void)setBagKeyRegistrationEnabled:(BOOL)arg1 ;
+(void)setProcessAssertionsEnabled:(BOOL)arg1 ;
@end
