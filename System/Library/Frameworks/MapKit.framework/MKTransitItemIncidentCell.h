/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <libobjc.A.dylib/MKTransitItemIncidentView.h>

@class MKTransitItemIncidentView, NSString;

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell <MKTransitItemIncidentView> {

	MKTransitItemIncidentView* _incidentView;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(BOOL)padBottom;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)setPadBottom:(BOOL)arg1 ;
-(void)_configureViews;
-(void)_updateIncidentViewBottomOffset;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
@end

