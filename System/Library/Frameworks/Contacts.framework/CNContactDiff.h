/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(id)initWithUpdates:(id)arg1 ;
-(NSArray *)updates;
-(BOOL)applyToABPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
@end

