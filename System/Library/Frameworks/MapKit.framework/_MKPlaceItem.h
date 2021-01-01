/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, MKMapItem, EKCalendarItem, CNContact;


@protocol _MKPlaceItem
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) BOOL hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
@required
-(NSString *)name;
-(unsigned long long)options;
-(MKMapItem *)mapItem;
-(CNContact *)contact;
-(EKCalendarItem *)calendarItem;
-(BOOL)isIntermediateMapItem;
-(BOOL)isContactPersisted;
-(BOOL)hasContactOnly;

@end

