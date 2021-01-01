/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser {

	NSMutableArray* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * discoveredAccessoryServers;                      //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithQueue:(id)arg1 ;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMutableArray *)discoveredAccessoryServers;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)_setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 ;
-(void)removeAccessoryServerWithStream:(id)arg1 ;
@end

