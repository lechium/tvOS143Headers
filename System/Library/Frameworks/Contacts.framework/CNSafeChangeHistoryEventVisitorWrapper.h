/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNChangeHistoryEventVisitorPrivate.h>

@protocol CNChangeHistoryEventVisitor;
@class NSString;

@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject <CNChangeHistoryEventVisitorPrivate> {

	id<CNChangeHistoryEventVisitor> _visitor;

}

@property (nonatomic,readonly) id<CNChangeHistoryEventVisitor> visitor;              //@synthesize visitor=_visitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithChangeHistoryEventVisitor:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitAddGroupEvent:(id)arg1 ;
-(void)visitUpdateGroupEvent:(id)arg1 ;
-(void)visitDeleteGroupEvent:(id)arg1 ;
-(void)visitAddMemberToGroupEvent:(id)arg1 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg1 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1 ;
-(void)visitLinkContactsEvent:(id)arg1 ;
-(void)visitUnlinkContactEvent:(id)arg1 ;
-(void)visitPreferredContactForNameEvent:(id)arg1 ;
-(void)visitPreferredContactForImageEvent:(id)arg1 ;
-(void)visitDifferentMeCardEvent:(id)arg1 ;
-(id<CNChangeHistoryEventVisitor>)visitor;
@end

