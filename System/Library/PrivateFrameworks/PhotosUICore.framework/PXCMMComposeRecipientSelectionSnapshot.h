/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject {

	NSArray* _selectedComposeRecipients;
	NSArray* _selectedRecipients;

}

@property (nonatomic,copy,readonly) NSArray * selectedComposeRecipients;              //@synthesize selectedComposeRecipients=_selectedComposeRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedRecipients;                     //@synthesize selectedRecipients=_selectedRecipients - In the implementation block
+(id)new;
-(id)init;
-(id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2 ;
-(NSArray *)selectedComposeRecipients;
-(NSArray *)selectedRecipients;
@end
