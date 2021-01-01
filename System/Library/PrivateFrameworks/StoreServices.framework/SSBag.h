/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, SSBagProfileConfig;

@interface SSBag : NSObject {

	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) NSString * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                         //@synthesize profileVersion=_profileVersion - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) SSBagProfileConfig * profileConfig; 
+(id)cache;
+(unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)arg1 ;
+(id)bagWithProfileConfig:(id)arg1 ;
+(void)removeAllDebugBackingDictionaries;
+(void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)resetCaches;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(id)arrayForKey:(id)arg1 error:(id*)arg2 ;
-(id)boolForKey:(id)arg1 error:(id*)arg2 ;
-(id)doubleForKey:(id)arg1 error:(id*)arg2 ;
-(id)integerForKey:(id)arg1 error:(id*)arg2 ;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(id)URLForKey:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryForKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)profileVersion;
-(id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 ;
-(void)_bagChanged:(id)arg1 ;
-(id)_AMSBag;
-(void)setProfileVersion:(NSString *)arg1 ;
-(void)arrayForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)boolForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dictionaryForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)doubleForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)integerForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stringForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)URLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)arrayPromiseForKey:(id)arg1 ;
-(id)boolPromiseForKey:(id)arg1 ;
-(id)dictionaryPromiseForKey:(id)arg1 ;
-(id)doublePromiseForKey:(id)arg1 ;
-(id)integerPromiseForKey:(id)arg1 ;
-(id)stringPromiseForKey:(id)arg1 ;
-(id)URLPromiseForKey:(id)arg1 ;
-(SSBagProfileConfig *)profileConfig;
-(BOOL)URLIsTrusted:(id)arg1 ;
-(BOOL)canHandleTrustedDomains;
@end

