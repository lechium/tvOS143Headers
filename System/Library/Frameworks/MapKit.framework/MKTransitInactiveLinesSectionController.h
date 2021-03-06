/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;              //@synthesize inactiveLines=_inactiveLines - In the implementation block
-(id)init;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(void)_buildRows;
-(NSArray *)inactiveLines;
@end

