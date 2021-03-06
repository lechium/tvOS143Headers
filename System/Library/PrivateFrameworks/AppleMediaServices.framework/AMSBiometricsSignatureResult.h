/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding> {

	AMSBiometricsSignatureRequest* _originalRequest;
	NSString* _signature;

}

@property (nonatomic,retain) AMSBiometricsSignatureRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSBiometricsSignatureRequest *)originalRequest;
-(void)setOriginalRequest:(AMSBiometricsSignatureRequest *)arg1 ;
-(NSString *)signature;
-(void)setSignature:(NSString *)arg1 ;
@end

