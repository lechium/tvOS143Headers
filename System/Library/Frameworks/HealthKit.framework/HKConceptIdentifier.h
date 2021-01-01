/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding> {

	long long _rawIdentifier;

}

@property (assign,nonatomic) long long rawIdentifier;                             //@synthesize rawIdentifier=_rawIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)root;
+(id)identifierWithRawIdentifier:(long long)arg1 ;
+(id)identifierWithNumber:(id)arg1 ;
+(id)inMemoryConceptIdentifier;
+(id)medication;
+(id)diastolicBloodPressure;
+(id)systolicBloodPressure;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRawIdentifier:(long long)arg1 ;
-(long long)rawIdentifier;
-(NSNumber *)numberRepresentation;
-(void)setRawIdentifier:(long long)arg1 ;
@end

