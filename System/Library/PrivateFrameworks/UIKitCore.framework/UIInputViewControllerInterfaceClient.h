/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)responseDelegate;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(id<_UIIVCInterface>)forwardingInterface;
@end

