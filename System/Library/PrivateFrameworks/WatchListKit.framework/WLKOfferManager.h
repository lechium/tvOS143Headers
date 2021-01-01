/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray;

@interface WLKOfferManager : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _offers;

}

@property (nonatomic,retain) NSArray * offers;              //@synthesize offers=_offers - In the implementation block
+(id)_offerFullPath;
+(id)_offerPath;
+(id)defaultOfferManager;
-(id)init;
-(id)_connection;
-(id)_offers;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(void)_setOffers:(id)arg1 ;
-(void)saveOffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOffers:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearOffers:(/*^block*/id)arg1 ;
@end

