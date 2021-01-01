/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class CNQuickAction, UIImageView, CNAvatarCardHighlightView, UILabel, UIPageControl, UIView, UIButton, NSLayoutConstraint;

@interface CNAvatarCardActionCell : UITableViewCell {

	CGPoint _initialLocation;
	CGPoint _lastLocation;
	BOOL _swipped;
	BOOL _moreHighlighted;
	BOOL _gestureActivated;
	BOOL _transitioning;
	CNQuickAction* _action;
	long long _context;
	long long _mode;
	UIImageView* _actionImageView;
	CNAvatarCardHighlightView* _defaultHighlightView;
	CNAvatarCardHighlightView* _moreHighlightView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIPageControl* _pageControl;
	UILabel* _moreLabel;
	UIView* _translatingView;
	UIView* _separatorView;
	UIButton* _expandButton;
	NSLayoutConstraint* _punchOutLeftConstraint;
	NSLayoutConstraint* _translatingViewLeadingConstraint;
	NSLayoutConstraint* _pageControlLeadingConstraint;
	NSLayoutConstraint* _expandButtonWidthConstraint;
	NSLayoutConstraint* _moreHighlightViewHiddingConstraint;
	double _initialTranslatingViewLeadingConstraintConstant;
	unsigned long long _lastScrollDirection;
	double _lastScrollDirectionTimestamp;

}

@property (nonatomic,retain) UIImageView * actionImageView;                                        //@synthesize actionImageView=_actionImageView - In the implementation block
@property (nonatomic,retain) CNAvatarCardHighlightView * defaultHighlightView;                     //@synthesize defaultHighlightView=_defaultHighlightView - In the implementation block
@property (nonatomic,retain) CNAvatarCardHighlightView * moreHighlightView;                        //@synthesize moreHighlightView=_moreHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                          //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) UILabel * moreLabel;                                                  //@synthesize moreLabel=_moreLabel - In the implementation block
@property (nonatomic,retain) UIView * translatingView;                                             //@synthesize translatingView=_translatingView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                               //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIButton * expandButton;                                              //@synthesize expandButton=_expandButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * punchOutLeftConstraint;                          //@synthesize punchOutLeftConstraint=_punchOutLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * translatingViewLeadingConstraint;                //@synthesize translatingViewLeadingConstraint=_translatingViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * pageControlLeadingConstraint;                    //@synthesize pageControlLeadingConstraint=_pageControlLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandButtonWidthConstraint;                     //@synthesize expandButtonWidthConstraint=_expandButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * moreHighlightViewHiddingConstraint;              //@synthesize moreHighlightViewHiddingConstraint=_moreHighlightViewHiddingConstraint - In the implementation block
@property (assign,nonatomic) double initialTranslatingViewLeadingConstraintConstant;               //@synthesize initialTranslatingViewLeadingConstraintConstant=_initialTranslatingViewLeadingConstraintConstant - In the implementation block
@property (assign,nonatomic) unsigned long long lastScrollDirection;                               //@synthesize lastScrollDirection=_lastScrollDirection - In the implementation block
@property (assign,nonatomic) double lastScrollDirectionTimestamp;                                  //@synthesize lastScrollDirectionTimestamp=_lastScrollDirectionTimestamp - In the implementation block
@property (assign,nonatomic) BOOL gestureActivated;                                                //@synthesize gestureActivated=_gestureActivated - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                   //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) BOOL swipped;                                                         //@synthesize swipped=_swipped - In the implementation block
@property (assign,nonatomic) BOOL moreHighlighted;                                                 //@synthesize moreHighlighted=_moreHighlighted - In the implementation block
@property (nonatomic,retain) CNQuickAction * action;                                               //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long context;                                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long mode;                                                       //@synthesize mode=_mode - In the implementation block
+(id)cellNibForMode:(long long)arg1 ;
+(id)animatingCell;
+(id)cellNibForContacts;
-(void)setMode:(long long)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(long long)mode;
-(void)prepareForReuse;
-(CNQuickAction *)action;
-(void)setAction:(CNQuickAction *)arg1 ;
-(void)reloadData;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(NSLayoutConstraint *)translatingViewLeadingConstraint;
-(void)setInitialTranslatingViewLeadingConstraintConstant:(double)arg1 ;
-(void)_updateFonts;
-(UIView *)separatorView;
-(CNAvatarCardHighlightView *)moreHighlightView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)_updateHighlightAnimated:(BOOL)arg1 ;
-(CNAvatarCardHighlightView *)defaultHighlightView;
-(UIButton *)expandButton;
-(UIImageView *)actionImageView;
-(BOOL)moreHighlighted;
-(UIPageControl *)pageControl;
-(UILabel *)moreLabel;
-(NSLayoutConstraint *)moreHighlightViewHiddingConstraint;
-(void)setMoreHighlightViewHiddingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)expandButtonWidthConstraint;
-(void)setGestureActivated:(BOOL)arg1 ;
-(void)setSwipped:(BOOL)arg1 ;
-(void)trackSwipe:(id)arg1 ;
-(void)trackHighlight:(id)arg1 ;
-(BOOL)transitioning;
-(double)initialTranslatingViewLeadingConstraintConstant;
-(BOOL)gestureActivated;
-(unsigned long long)lastScrollDirection;
-(double)lastScrollDirectionTimestamp;
-(void)setLastScrollDirectionTimestamp:(double)arg1 ;
-(void)setLastScrollDirection:(unsigned long long)arg1 ;
-(void)_animateActions:(id)arg1 fromIndex:(unsigned long long)arg2 withDelta:(long long)arg3 scrollDirection:(unsigned long long)arg4 ;
-(UIView *)translatingView;
-(void)setTransitioning:(BOOL)arg1 ;
-(NSLayoutConstraint *)pageControlLeadingConstraint;
-(void)setMoreHighlighted:(BOOL)arg1 ;
-(void)startTrackingWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingWithGestureRecognizer:(id)arg1 ;
-(BOOL)swipped;
-(void)setActionImageView:(UIImageView *)arg1 ;
-(void)setDefaultHighlightView:(CNAvatarCardHighlightView *)arg1 ;
-(void)setMoreHighlightView:(CNAvatarCardHighlightView *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setMoreLabel:(UILabel *)arg1 ;
-(void)setTranslatingView:(UIView *)arg1 ;
-(void)setExpandButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)punchOutLeftConstraint;
-(void)setPunchOutLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTranslatingViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPageControlLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExpandButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

