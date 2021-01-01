/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNObservation.h>

@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long elementCount; 
@property (readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(BOOL)computeDistance:(float*)arg1 toFeaturePrintObservation:(id)arg2 error:(id*)arg3 ;
-(float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id*)arg2 ;
@end
