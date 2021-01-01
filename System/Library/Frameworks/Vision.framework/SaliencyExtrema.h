/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface SaliencyExtrema : NSObject {

	CGPoint _extrema[4];
	float _extremeValues[4];

}
-(id)init;
-(void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3 ;
-(CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(vImage_Buffer*)arg2 ;
@end

