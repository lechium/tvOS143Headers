/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSURLRequestComparator.h>

@class NSString;

@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator> {

	/*^block*/id _criteriaBlock;

}

@property (nonatomic,copy) id criteriaBlock;                        //@synthesize criteriaBlock=_criteriaBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldOverrideURLRequest:(id)arg1 ;
-(id)initWithCriteriaBlock:(/*^block*/id)arg1 ;
-(id)criteriaBlock;
-(void)setCriteriaBlock:(id)arg1 ;
@end

