/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AKBasicLoginActions : NSObject <NSCopying> {

	/*^block*/id _authenticateAction;
	/*^block*/id _ak_cancelAction;
	/*^block*/id _createIDAction;
	/*^block*/id _useIDAction;
	/*^block*/id _forgotIDAction;
	/*^block*/id _forgotPasswordAction;

}

@property (nonatomic,copy) id authenticateAction;                //@synthesize authenticateAction=_authenticateAction - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                   //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
@property (nonatomic,copy) id createIDAction;                    //@synthesize createIDAction=_createIDAction - In the implementation block
@property (nonatomic,copy) id useIDAction;                       //@synthesize useIDAction=_useIDAction - In the implementation block
@property (nonatomic,copy) id forgotIDAction;                    //@synthesize forgotIDAction=_forgotIDAction - In the implementation block
@property (nonatomic,copy) id forgotPasswordAction;              //@synthesize forgotPasswordAction=_forgotPasswordAction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)createIDAction;
-(void)setCreateIDAction:(id)arg1 ;
-(id)ak_cancelAction;
-(id)authenticateAction;
-(void)setAk_cancelAction:(id)arg1 ;
-(void)setAuthenticateAction:(id)arg1 ;
-(id)useIDAction;
-(id)forgotIDAction;
-(id)forgotPasswordAction;
-(void)setUseIDAction:(id)arg1 ;
-(void)setForgotPasswordAction:(id)arg1 ;
-(void)setForgotIDAction:(id)arg1 ;
@end

