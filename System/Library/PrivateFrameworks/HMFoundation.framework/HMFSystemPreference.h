/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFPreference.h>
#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMFSystemPreference : HMFPreference <HMFObject> {

	NSString* _domain;

}

@property (copy,readonly) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)domain;
-(NSString *)propertyDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4 ;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 parent:(id)arg5 ;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 ;
@end

