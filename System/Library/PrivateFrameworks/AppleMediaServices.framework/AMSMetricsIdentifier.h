/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, AMSProcessInfo, NSString;

@interface AMSMetricsIdentifier : NSObject {

	ACAccount* _account;
	AMSProcessInfo* _clientInfo;
	NSString* _domain;
	double _duration;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
+(id)_database;
+(id)_sharedQueue;
+(void)removeIdentifiersForAccount:(id)arg1 ;
+(id)_accountIdentifierForAccount:(id)arg1 ;
+(void)cleanupIdentifiers;
-(id)init;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)generateEventFields;
-(id)generateIdentifier;
-(id)_generateCacheKey;
@end

