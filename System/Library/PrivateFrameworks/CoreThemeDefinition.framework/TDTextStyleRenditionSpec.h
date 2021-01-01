/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString, TDNamedColorProduction;

@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) short alignment; 
@property (nonatomic,copy) NSString * fontName; 
@property (assign,nonatomic) float fontSize; 
@property (assign,nonatomic) float maxPointSize; 
@property (assign,nonatomic) float minPointSize; 
@property (assign,nonatomic) short scalingStyle; 
@property (nonatomic,retain) TDNamedColorProduction * backgroundColor; 
@property (nonatomic,retain) TDNamedColorProduction * foregroundColor; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
@end
