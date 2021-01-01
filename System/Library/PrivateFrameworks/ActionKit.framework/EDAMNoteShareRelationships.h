/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSArray, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteShareRelationships : FATObject {

	NSArray* _invitations;
	NSArray* _memberships;
	EDAMNoteShareRelationshipRestrictions* _invitationRestrictions;

}

@property (nonatomic,retain) NSArray * invitations;                                                       //@synthesize invitations=_invitations - In the implementation block
@property (nonatomic,retain) NSArray * memberships;                                                       //@synthesize memberships=_memberships - In the implementation block
@property (nonatomic,retain) EDAMNoteShareRelationshipRestrictions * invitationRestrictions;              //@synthesize invitationRestrictions=_invitationRestrictions - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)invitations;
-(void)setInvitations:(NSArray *)arg1 ;
-(NSArray *)memberships;
-(void)setMemberships:(NSArray *)arg1 ;
-(EDAMNoteShareRelationshipRestrictions *)invitationRestrictions;
-(void)setInvitationRestrictions:(EDAMNoteShareRelationshipRestrictions *)arg1 ;
@end
