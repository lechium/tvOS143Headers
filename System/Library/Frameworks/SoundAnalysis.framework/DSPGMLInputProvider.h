/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLFeatureDescription, NSMutableDictionary, NSArray, MLMultiArray;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {

	MLFeatureDescription* _featureDescription;
	NSMutableDictionary* _featureCache;
	NSArray* _allInputFeatureNames;
	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)input;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithFeatureDescription:(id)arg1 allInputFeatureNames:(id)arg2 ;
-(void)setFeatureValue:(id)arg1 forFeatureName:(id)arg2 ;
@end

