/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFTextFieldConfiguration, NSString, WFDialogButton;

@interface WFInputTextDialogRequest : WFDialogRequest <NSSecureCoding> {

	WFTextFieldConfiguration* _textFieldConfiguration;
	NSString* _message;
	WFDialogButton* _cancelButton;
	WFDialogButton* _doneButton;

}

@property (nonatomic,copy,readonly) WFTextFieldConfiguration * textFieldConfiguration;              //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)message;
-(WFDialogButton *)cancelButton;
-(WFDialogButton *)doneButton;
-(WFTextFieldConfiguration *)textFieldConfiguration;
-(id)initWithTextFieldConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
@end

