/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {

	long long _sourceWidth;
	long long _sourceHeight;
	double _centerX;
	double _centerY;
	double _size;

}
-(id)description;
-(long long)photosFaceRepresentationSourceWidth;
-(long long)photosFaceRepresentationSourceHeight;
-(double)photosFaceRepresentationCenterX;
-(double)photosFaceRepresentationCenterY;
-(double)photosFaceRepresentationSize;
-(double)photosFaceRepresentationBlurScore;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(long long)photosFaceRepresentationQualityMeasure;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5 ;
-(double)photosFaceRepresentationQuality;
@end

