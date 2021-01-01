/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSURLBagContext, ISURLBag, NSNumber, NSString;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSURLBagContext* _context;
	ISURLBag* _outputBag;
	NSNumber* _accountDSID;

}

@property (nonatomic,retain) NSNumber * accountDSID;                                                    //@synthesize accountDSID=_accountDSID - In the implementation block
@property (readonly) SSURLBagContext * context;                                                         //@synthesize context=_context - In the implementation block
@property (readonly) ISURLBag * URLBag; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_networkSynchronyQueue;
+(id)_networkCounters;
+(id)_executedNetworkRequests;
+(id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1 ;
+(void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)decrementNetworkCounterForBagContext:(id)arg1 ;
+(void)incrementNetworkCounterForBagContext:(id)arg1 ;
+(id)storeFrontHeaderSuffix;
-(id)init;
-(void)run;
-(SSURLBagContext *)context;
-(id)uniqueKey;
-(NSNumber *)accountDSID;
-(ISURLBag *)URLBag;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(id)initWithBagContext:(id)arg1 ;
-(void)_setOutputURLBag:(id)arg1 ;
-(void)_addHeadersToRequestProperties:(id)arg1 ;
-(BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)_analyzeBagForActiveSystemApps:(id)arg1 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg1 ;
-(void)_sendPingsForURLBag:(id)arg1 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(void)setAccountDSID:(NSNumber *)arg1 ;
@end
