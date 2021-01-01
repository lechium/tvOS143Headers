/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFDialogResponse : NSObject <NSSecureCoding> {

	long long _responseCode;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) long long responseCode;                         //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCancelled;
-(long long)responseCode;
-(id)initWithResponseCode:(long long)arg1 ;
-(id)initWithCancelled:(BOOL)arg1 ;
-(BOOL)shouldDismissDialogInTransientMode;
@end
