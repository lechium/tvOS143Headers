/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>

@protocol CNAvatarViewDelegate, CNCancelable;
@class UIView, UIImage, CNContactStore, PRPersonaStore, NSArray, NSString, CNAvatarCardController, UIButton, NSLayoutConstraint, UINavigationController, PRLikeness, CNContact, UIColor;

@interface CNAvatarView : UIControl <CNAvatarCardControllerDelegate, CNContactChangesObserver, CNCardTransitioning> {

	BOOL _showsActionsOnTap;
	BOOL _showsActionsOnForcePress;
	BOOL _threeDTouchEnabled;
	BOOL _showsContactOnTap;
	BOOL _registeredInNotifier;
	BOOL _registeredContactAction;
	BOOL _disableCornerRadiusForAvatar;
	BOOL _useHalfSizeMongramsAndImages;
	BOOL _autoUpdateContact;
	BOOL _asynchronousRendering;
	BOOL _allowsAnimation;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	NSArray* _contacts;
	NSString* _name;
	NSString* _message;
	id<CNAvatarViewDelegate> _delegate;
	UIView* _forcePressView;
	CNAvatarCardController* _cardController;
	UIButton* _imageButton;
	NSArray* _likenessProviders;
	id<CNCancelable> _resolverToken;
	NSArray* _likenessViews;
	UIView* _subviewsContainer;
	NSArray* _subviewsConstraints;
	NSLayoutConstraint* _likenessViewSizeConstraint;
	UINavigationController* _contactViewNavigationController;
	UIImage* _overrideImage;
	PRLikeness* _overridePRLikeness;
	long long _monogrammerStyle;

}

@property (assign,nonatomic) BOOL showsActionsOnTap; 
@property (assign,nonatomic) BOOL showsActionsOnForcePress; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) CNAvatarCardController * cardController;                               //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) UIButton * imageButton;                                                //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,retain) NSArray * likenessProviders;                                           //@synthesize likenessProviders=_likenessProviders - In the implementation block
@property (nonatomic,retain) id<CNCancelable> resolverToken;                                        //@synthesize resolverToken=_resolverToken - In the implementation block
@property (nonatomic,copy) NSArray * likenessViews;                                                 //@synthesize likenessViews=_likenessViews - In the implementation block
@property (nonatomic,retain) UIView * subviewsContainer;                                            //@synthesize subviewsContainer=_subviewsContainer - In the implementation block
@property (nonatomic,copy) NSArray * subviewsConstraints;                                           //@synthesize subviewsConstraints=_subviewsConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * likenessViewSizeConstraint;                       //@synthesize likenessViewSizeConstraint=_likenessViewSizeConstraint - In the implementation block
@property (nonatomic,retain) UINavigationController * contactViewNavigationController;              //@synthesize contactViewNavigationController=_contactViewNavigationController - In the implementation block
@property (assign) BOOL registeredInNotifier;                                                       //@synthesize registeredInNotifier=_registeredInNotifier - In the implementation block
@property (assign) BOOL registeredContactAction;                                                    //@synthesize registeredContactAction=_registeredContactAction - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                               //@synthesize overrideImage=_overrideImage - In the implementation block
@property (nonatomic,retain) PRLikeness * overridePRLikeness;                                       //@synthesize overridePRLikeness=_overridePRLikeness - In the implementation block
@property (assign,nonatomic) BOOL disableCornerRadiusForAvatar;                                     //@synthesize disableCornerRadiusForAvatar=_disableCornerRadiusForAvatar - In the implementation block
@property (assign,nonatomic) BOOL useHalfSizeMongramsAndImages;                                     //@synthesize useHalfSizeMongramsAndImages=_useHalfSizeMongramsAndImages - In the implementation block
@property (nonatomic,readonly) UIColor * accentColor; 
@property (assign,nonatomic) long long monogrammerStyle;                                            //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage; 
@property (nonatomic,readonly) CGRect contentImageFrame; 
@property (assign,nonatomic) BOOL autoUpdateContact;                                                //@synthesize autoUpdateContact=_autoUpdateContact - In the implementation block
@property (assign,nonatomic) BOOL asynchronousRendering;                                            //@synthesize asynchronousRendering=_asynchronousRendering - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (assign,nonatomic) BOOL allowsAnimation;                                                  //@synthesize allowsAnimation=_allowsAnimation - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch; 
@property (nonatomic,readonly) CNContactStore * contactStore;                                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                       //@synthesize personaStore=_personaStore - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;                   //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * message;                                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) UIView * forcePressView;                                        //@synthesize forcePressView=_forcePressView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(BOOL)defaultThreeDTouchSupport;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<CNAvatarViewDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarViewDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)overrideImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(CNContact *)contact;
-(UIImage *)contentImage;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(id)descriptorForRequiredKeys;
-(void)contactDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(double)_diameter;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(BOOL)isThreeDTouchEnabled;
-(PRPersonaStore *)personaStore;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(void)setImageButton:(UIButton *)arg1 ;
-(UIButton *)imageButton;
-(void)setSubviewsContainer:(UIView *)arg1 ;
-(UIView *)subviewsContainer;
-(void)setupAvatarCardControllerIfNeeded;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(void)setAutoUpdateContact:(BOOL)arg1 ;
-(void)_updateEnabled;
-(void)updateLikenessViewsWithCurrentSize;
-(void)_resolveContactLikenesses;
-(void)setupSubviews;
-(void)_updateCardActions;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(BOOL)autoUpdateContact;
-(BOOL)showsContactOnTap;
-(void)showContact:(id)arg1 ;
-(UINavigationController *)contactViewNavigationController;
-(void)setContactViewNavigationController:(UINavigationController *)arg1 ;
-(void)setOverridePRLikeness:(id)arg1 reload:(BOOL)arg2 ;
-(void)_updateRegistration;
-(void)_updateContactAction;
-(BOOL)shouldTrack;
-(void)setActionCategories:(NSArray *)arg1 ;
-(NSArray *)actionCategories;
-(UIView *)forcePressView;
-(void)didMoveToWindow;
-(void)contactDidChange;
-(CGRect)transitioningFrame;
-(CGRect)contentImageFrame;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)avatarCardController:(id)arg1 willShowActions:(id)arg2 ;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)avatarCardControllerWillDismiss:(id)arg1 ;
-(void)avatarCardControllerDidDismiss:(id)arg1 ;
-(UIView *)transitioningView;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(BOOL)prohibitsPersonaFetch;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(void)setLikenessProviders:(NSArray *)arg1 ;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(void)setDisableCornerRadiusForAvatar:(BOOL)arg1 ;
-(void)setUseHalfSizeMongramsAndImages:(BOOL)arg1 ;
-(void)dismissContactViewController:(id)arg1 ;
-(void)setOverridePRLikeness:(PRLikeness *)arg1 ;
-(UIColor *)accentColor;
-(id)imageForTransitioningToFullScreen;
-(void)setForcePressView:(UIView *)arg1 ;
-(NSArray *)likenessProviders;
-(id<CNCancelable>)resolverToken;
-(void)setResolverToken:(id<CNCancelable>)arg1 ;
-(NSArray *)likenessViews;
-(void)setLikenessViews:(NSArray *)arg1 ;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)likenessViewSizeConstraint;
-(void)setLikenessViewSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)registeredInNotifier;
-(void)setRegisteredInNotifier:(BOOL)arg1 ;
-(BOOL)registeredContactAction;
-(void)setRegisteredContactAction:(BOOL)arg1 ;
-(PRLikeness *)overridePRLikeness;
-(BOOL)disableCornerRadiusForAvatar;
-(BOOL)useHalfSizeMongramsAndImages;
-(long long)monogrammerStyle;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(BOOL)asynchronousRendering;
-(void)setAsynchronousRendering:(BOOL)arg1 ;
-(BOOL)allowsAnimation;
-(void)setAllowsAnimation:(BOOL)arg1 ;
-(void)setShowsActionsOnTap:(BOOL)arg1 ;
-(BOOL)showsActionsOnTap;
-(void)setShowsActionsOnForcePress:(BOOL)arg1 ;
-(BOOL)showsActionsOnForcePress;
@end

