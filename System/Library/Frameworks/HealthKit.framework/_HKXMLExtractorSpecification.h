/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _HKXMLExtractorSpecification : NSObject {

	NSString* _specificationString;
	NSArray* _specificationElements;

}

@property (copy,readonly) NSString * specificationString;               //@synthesize specificationString=_specificationString - In the implementation block
@property (copy,readonly) NSArray * specificationElements;              //@synthesize specificationElements=_specificationElements - In the implementation block
-(id)initWithSpecificationString:(id)arg1 ;
-(BOOL)matchesElementStack:(id)arg1 ;
-(NSString *)specificationString;
-(NSArray *)specificationElements;
@end

