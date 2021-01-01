/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFacesFromAssetFeatureExtractor.h>

@class MAFeatureExtractor, NSString;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor {

	MAFeatureExtractor* _faceFeatureExtractor;
	NSString* _name;

}

@property (readonly) MAFeatureExtractor * faceFeatureExtractor;              //@synthesize faceFeatureExtractor=_faceFeatureExtractor - In the implementation block
@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureLength;
-(id)initWithFaceFeatureExtractor:(id)arg1 name:(id)arg2 ;
-(id)floatVectorWithFaces:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 underlyingError:(id)arg4 ;
-(MAFeatureExtractor *)faceFeatureExtractor;
@end

