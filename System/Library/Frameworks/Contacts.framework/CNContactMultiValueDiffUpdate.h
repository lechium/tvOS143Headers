/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNContactUpdate.h>

@class CNMultiValuePropertyDescription, CNMultiValueDiff;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate {

	CNMultiValuePropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) CNMultiValuePropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) CNMultiValueDiff * diff;                                 //@synthesize diff=_diff - In the implementation block
-(id)description;
-(CNMultiValuePropertyDescription *)property;
-(CNMultiValueDiff *)diff;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
@end

