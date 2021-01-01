/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;
@class NSMutableSet, NSXPCListener, NSObject, NSString;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _clients;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	id<RERemoteTrainingClientListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RERemoteTrainingClientListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTrainingClientListener;
-(id)init;
-(void)dealloc;
-(id<RERemoteTrainingClientListenerDelegate>)delegate;
-(void)setDelegate:(id<RERemoteTrainingClientListenerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

