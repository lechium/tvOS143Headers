/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropClassroomTransferManagerProtocol.h>

@protocol SFAirDropClassroomTransferDelegate;
@class NSString;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol> {

	id<SFAirDropClassroomTransferDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAirDropClassroomTransferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<SFAirDropClassroomTransferDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropClassroomTransferDelegate>)arg1 ;
-(void)activate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)transferWithIdentifierWasAccepted:(id)arg1 ;
-(void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2 ;
@end

