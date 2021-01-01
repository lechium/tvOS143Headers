/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/_REFeatureMapLoggingProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray, NSDictionary;

@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying> {

	unsigned long long _hash;
	unsigned long long* _values;
	NSDictionary* _indices;

}

@property (nonatomic,readonly) unsigned long long featureCount; 
@property (nonatomic,readonly) NSSet * featureNames; 
@property (nonatomic,readonly) NSSet * allFeatures; 
@property (nonatomic,readonly) NSArray * loggingValues; 
+(id)defaultFeatureName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)_count;
-(void)removeAllValues;
-(unsigned long long)valueForFeature:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(BOOL)hasValueForFeature:(id)arg1 ;
-(void)setValue:(unsigned long long)arg1 forFeature:(id)arg2 ;
-(id)initWithFeatureMap:(id)arg1 ;
-(NSSet *)allFeatures;
-(id)featureValueForFeature:(id)arg1 ;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)featureCount;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)loggingValues;
-(void)setFeatureValue:(id)arg1 forFeature:(id)arg2 ;
-(void)removeValueForFeature:(id)arg1 ;
-(void)enumerateBoolFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInt64FeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDoubleFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateStringFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEmptyFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInt64FeaturesUsingIndexedBlock:(/*^block*/id)arg1 emptyFeatureBlock:(/*^block*/id)arg2 ;
@end

