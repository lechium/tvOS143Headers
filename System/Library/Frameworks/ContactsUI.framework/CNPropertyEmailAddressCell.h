/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell {

	BOOL _VIP;

}

@property (assign,getter=isVIP,nonatomic) BOOL VIP;              //@synthesize VIP=_VIP - In the implementation block
-(BOOL)shouldPerformDefaultAction;
-(void)setVIP:(BOOL)arg1 ;
-(BOOL)shouldShowStar;
-(BOOL)isVIP;
-(void)updateTransportButtons;
@end

