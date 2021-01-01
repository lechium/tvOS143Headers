/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIStackView, UIImageView, NSString;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {

	UIStackView* _stackView;
	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_setConstraints;
-(id)aggregatedDetailsFor:(id)arg1 ;
-(id)customBodyTextView;
-(void)configureWithIncident:(id)arg1 ;
-(void)configureWithNotice:(id)arg1 ;
@end
