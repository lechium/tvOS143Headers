/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject, NSArray;

@interface TSBonjourBrowser : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourBrowserDelegate> _delegate;
	NSArray* _nodes;

}

@property (assign,nonatomic) id<TSBonjourBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                      //@synthesize nodes=_nodes - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TSBonjourBrowserDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourBrowserDelegate>)arg1 ;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(BOOL)stopBrowsing;
-(void)addedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(void)removedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(BOOL)startBrowsingWithError:(id*)arg1 ;
@end

