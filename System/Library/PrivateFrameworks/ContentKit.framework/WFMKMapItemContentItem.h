/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass> {

	CLLocation* _queryLocation;

}

@property (nonatomic,retain) CLLocation * queryLocation;              //@synthesize queryLocation=_queryLocation - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2 ;
-(MKMapItem *)mapItem;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(CLLocation *)queryLocation;
-(void)setQueryLocation:(CLLocation *)arg1 ;
@end

