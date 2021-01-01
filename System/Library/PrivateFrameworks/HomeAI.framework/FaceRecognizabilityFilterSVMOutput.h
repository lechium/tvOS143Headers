/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface FaceRecognizabilityFilterSVMOutput : NSObject <MLFeatureProvider> {

	long long _classLabel;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long classLabel;                         //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(id)initWithClassLabel:(long long)arg1 classProbability:(id)arg2 ;
-(long long)classLabel;
-(void)setClassLabel:(long long)arg1 ;
-(void)setClassProbability:(NSDictionary *)arg1 ;
@end

