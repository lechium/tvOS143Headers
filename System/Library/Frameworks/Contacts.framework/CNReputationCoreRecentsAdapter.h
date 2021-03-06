/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
-(id)init;
-(CRRecentContactsLibrary *)library;
-(id)recentContactsForHandle:(id)arg1 ;
-(id)initWithRecentContactsLibrary:(id)arg1 ;
@end

