//
//  SPTagListViewCell.h
//  Simplenote
//
//  Created by Tom Witkin on 7/26/13.
//  Copyright (c) 2013 Automattic. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SPTagListViewCell;

@protocol SPTagListViewCellDelegate <NSObject>

@required
- (void)tagListViewCellShouldDeleteTag:(SPTagListViewCell *)cell;
- (void)tagListViewCellShouldRenameTag:(SPTagListViewCell *)cell;
@end

@interface SPTagListViewCell : UITableViewCell {
    id<SPTagListViewCellDelegate> delegate;
    
    BOOL hasHighlightedTextColor;
    BOOL performedInitialLayout;
}

@property (nonatomic, assign) id<SPTagListViewCellDelegate> delegate;

@property (nonatomic, strong) UITextField *tagNameTextField;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *highlightedTextColor;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong) NSNumber *textKerning;

- (void)setIconImage:(UIImage *)image;
- (void)resetCellForReuse;
- (void)setTagNameText:(NSString *)text;
- (void)setTextFieldEditable:(BOOL)editable;

@end
