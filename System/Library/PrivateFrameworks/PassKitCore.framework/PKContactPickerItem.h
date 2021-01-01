/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSString, NSArray;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {

	NSMutableSet* _acceptedValues;
	NSString* _displayName;
	NSString* _submissionValue;
	NSArray* _alternativeAcceptedValues;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * submissionValue;                  //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeAcceptedValues;              //@synthesize alternativeAcceptedValues=_alternativeAcceptedValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)submissionValue;
-(id)acceptedValues;
-(BOOL)isValueAccepted:(id)arg1 ;
-(NSArray *)alternativeAcceptedValues;
@end
