/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface BPSSubscriberList : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _tickets;
	long long _nextTicket;

}

@property (nonatomic,retain) NSMutableArray * items;                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * tickets;              //@synthesize tickets=_tickets - In the implementation block
@property (assign,nonatomic) long long nextTicket;                  //@synthesize nextTicket=_nextTicket - In the implementation block
-(id)init;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(long long)appendElement:(id)arg1 ;
-(id)claimAll;
-(void)removeTicket:(long long)arg1 ;
-(long long)nextTicket;
-(void)setNextTicket:(long long)arg1 ;
-(NSMutableArray *)tickets;
-(void)setTickets:(NSMutableArray *)arg1 ;
@end

