/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RECondition : NSObject <REAutomaticExportedInterface, NSCopying>
+(id)falseCondition;
+(id)trueCondition;
+(id)conditionHasValueForFeature:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3 ;
+(id)andConditions:(id)arg1 ;
+(id)orConditions:(id)arg1 ;
+(id)notCondition:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 hasBoolValue:(BOOL)arg2 ;
+(id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
+(id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3 ;
+(id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
+(id)conditionForProbabilityWithRelation:(long long)arg1 floatValue:(float)arg2 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3 ;
+(id)conditionForFeature:(id)arg1 hasValue:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_dependentFeatures;
-(BOOL)_needsProbability;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
@end

