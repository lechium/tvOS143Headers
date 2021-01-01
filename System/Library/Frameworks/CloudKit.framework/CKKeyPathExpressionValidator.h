/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(id)initWithValidator:(id)arg1 ;
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)validator;
@end

