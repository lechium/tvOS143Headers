/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
@end

