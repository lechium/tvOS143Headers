/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TVColumnRowViewDelegate.h>

@class TVLTableElement, NSString;

@interface TVLColumnRowViewDelegate : NSObject <TVColumnRowViewDelegate> {

	TVLTableElement* _tableElement;

}

@property (retain) TVLTableElement * tableElement;                  //@synthesize tableElement=_tableElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVLTableElement *)tableElement;
-(void)setTableElement:(TVLTableElement *)arg1 ;
-(id)initWithTableElement:(id)arg1 ;
-(double)headerHeightForColumnRowView:(id)arg1 ;
-(double)columnRowView:(id)arg1 widthForColumn:(long long)arg2 ;
-(double)columnRowView:(id)arg1 heightForRow:(long long)arg2 ;
@end
