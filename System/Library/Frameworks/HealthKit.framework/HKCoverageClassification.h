/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, NSString, HKConcept, HKMedicalCodingCollection;

@interface HKCoverageClassification : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	NSArray* _typeCodings;
	NSString* _value;
	NSString* _name;
	HKConcept* _type;

}

@property (nonatomic,copy,readonly) NSString * value;                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * type; 
@property (nonatomic,copy,readonly) NSArray * typeCodings;                                         //@synthesize typeCodings=_typeCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCodingCollection * typeCodingCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)coverageClassificationWithTypeCodings:(id)arg1 value:(id)arg2 name:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)type;
-(NSString *)value;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(void)_setType:(id)arg1 ;
-(HKMedicalCodingCollection *)typeCodingCollection;
-(NSArray *)typeCodings;
-(void)_setTypeCodings:(id)arg1 ;
-(id)initWithTypeCodings:(id)arg1 value:(id)arg2 name:(id)arg3 ;
@end

