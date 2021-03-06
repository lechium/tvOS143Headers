/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface WFInputDateDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSDate* _inputtedDate;

}

@property (nonatomic,readonly) NSDate * inputtedDate;              //@synthesize inputtedDate=_inputtedDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputtedDate:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSDate *)inputtedDate;
@end

