/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVHKPreferences : NSObject {

	NSString* _domain;

}

@property (nonatomic,copy) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(id)preferencesWithDomain:(id)arg1 ;
+(id)addObserverForDomain:(id)arg1 withDistributedSynchronizationHandler:(/*^block*/id)arg2 ;
+(void)synchronizeAllDomains;
+(void)removeDomainObserver:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)domain;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(BOOL)setInteger:(int)arg1 forKey:(id)arg2 ;
-(BOOL)setFloat:(float)arg1 forKey:(id)arg2 ;
-(BOOL)setDouble:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)initWithDomain:(id)arg1 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(int)integerForKey:(id)arg1 defaultValue:(int)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
@end

