/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedCharacteristicResponse.h>
@class NSArray;


@protocol HAP2EncodedCharacteristicResponse <HAP2EncodedResponse>
@property (nonatomic,readonly) NSArray * characteristics; 
@required
-(NSArray *)characteristics;

@end


@class NSArray, NSString;

@interface HAP2EncodedCharacteristicResponse : HAP2LoggingObject <HAP2EncodedCharacteristicResponse> {

	NSArray* _responses;

}

@property (nonatomic,readonly) NSArray * characteristics; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEncrypted;
-(NSArray *)characteristics;
-(id)initWithCharacteristics:(id)arg1 ;
@end

